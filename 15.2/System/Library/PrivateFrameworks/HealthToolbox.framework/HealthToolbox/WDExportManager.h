@class WDProfile, NSArray, NSString, NSDateFormatter, NSDictionary, NSMutableArray, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface WDExportManager : NSObject {
    WDProfile *_profile;
    NSObject<OS_dispatch_queue> *_outputSerialQueue;
    struct _xmlTextWriter { } *_writer;
    struct _xmlTextWriter { } *_writerCDA;
    NSObject<OS_dispatch_semaphore> *_sem;
    NSMutableArray *_resultsTypes;
    NSMutableArray *_vitalsTypes;
    NSArray *_completedRecords;
    NSString *_documentsPath;
    NSString *_exportPath;
    NSString *_filePath;
    NSString *_CDAFilePath;
    NSString *_archivePath;
    NSDateFormatter *_xmlDateFormatter;
    NSDateFormatter *_cdaDateFormatter;
    NSDictionary *_dateIntervalsBySampleType;
}

@property BOOL exportInProgress;
@property BOOL exportFailed;

+ (id)allSupportedMedicalTypes;

- (id)initWithProfile:(id)a0;
- (void).cxx_destruct;
- (void)cancelCurrentExport;
- (void)createExportFileWithCompletion:(id /* block */)a0;
- (void)cleanupExportFilesWithError:(id)a0;
- (void)_queryForDateRanges;
- (void)_writeXMLPersonWithDateOfBirth:(id)a0 biologicalSex:(long long)a1 bloodType:(long long)a2 skinType:(long long)a3 cardioFitnessMedicationsUse:(id)a4;
- (void)_writeCDAHeaderWithName:(id)a0 birthData:(id)a1 biologicalSex:(long long)a2;
- (void)_getAllOrdinaryDataTypesOfCategory:(long long)a0 withArray:(id)a1;
- (void)_writeQuantityType:(id)a0;
- (void)_getAllOrdinaryDataTypesOfClass:(Class)a0 withArray:(id)a1;
- (void)_writeCategoryType:(id)a0;
- (void)_writeCorrelationType:(id)a0;
- (void)_writeAudiogramType;
- (void)_writeWorkoutType;
- (void)_writeActivitySummaries;
- (void)_writeHRVAndTachograms;
- (void)_writeMedicalRecords;
- (void)_completeAndCloseStreamingXML;
- (void)_exportHealthRecords;
- (void)_exportElectrocardiogramsWithName:(id)a0 dateOfBirth:(id)a1;
- (void)_archiveExportDirectory:(id)a0 toFile:(id)a1;
- (void)_outputSerialQueue_beginWritingQuantityType:(id)a0 startDate:(id)a1 endDate:(id)a2;
- (void)_outputSerialQueue_writeSamples:(id)a0 forQuantityType:(id)a1;
- (void)_queryForSamplesOfType:(id)a0 batchHandler:(id /* block */)a1;
- (void)_outputSerialQueue_finishWritingQuantityType:(id)a0 count:(unsigned long long)a1;
- (void)_writeDataForCategoryType:(id)a0;
- (void)_writeDataForCorrelationType:(id)a0;
- (void)_writeDataForAudiogramType;
- (void)_writeDataForWorkoutType;
- (void)_writeDataForWorkoutRoutes:(id)a0 semaphore:(id)a1;
- (void)_writeDataForActivitySummaries;
- (void)_writeDataForHRVAndTachograms;
- (void)_writeDataForMedicalRecords:(id)a0;
- (void)_writeCDAResultsHeader;
- (void)_writeCDAVitalHeader;
- (void)_writeCDAVitalsOrganizerStartWithStartDate:(id)a0 endDate:(id)a1;
- (void)_writeCDAResultsOrganizerStart;
- (id)_preferredUnitForObjectType:(id)a0;
- (void)_writeXMLRecordWithType:(id)a0 sourceName:(id)a1 sourceVersion:(id)a2 device:(id)a3 unit:(id)a4 metadata:(id)a5 hrvMetadataList:(id)a6 creationDate:(id)a7 startDate:(id)a8 endDate:(id)a9 value:(id)a10;
- (void)_writeCDAEntryWithValue:(id)a0 type:(id)a1 sourceName:(id)a2 sourceVersion:(id)a3 device:(id)a4 unit:(id)a5 metadata:(id)a6 startDate:(id)a7 endDate:(id)a8;
- (void)_writeCDAOrganizerEnd;
- (void)_writeCDASectionFooter;
- (void)_writeXMLCorrelationStartWithType:(id)a0 sourceName:(id)a1 sourceVersion:(id)a2 device:(id)a3 metadata:(id)a4 creationDate:(id)a5 startDate:(id)a6 endDate:(id)a7;
- (void)_writeXMLCorrelationEnd;
- (void)_writeXMLAudiogramStartWithAudiogram:(id)a0;
- (void)_writeXMLAudiogramSensitivityPoint:(id)a0;
- (void)_writeXMLAudiogramEnd;
- (void)_writeXMLWorkoutStartWithActivityType:(id)a0 duration:(id)a1 durationUnit:(id)a2 totalDistance:(id)a3 totalDistanceUnit:(id)a4 totalEnergyBurned:(id)a5 totalEnergyBurnedUnit:(id)a6 sourceName:(id)a7 sourceVersion:(id)a8 device:(id)a9 metadata:(id)a10 creationDate:(id)a11 startDate:(id)a12 endDate:(id)a13;
- (void)_writeXMLWorkoutEventWithEventType:(id)a0 date:(id)a1 duration:(double)a2 durationUnit:(id)a3;
- (void)_writeWorkoutRouteForWorkout:(id)a0 semaphore:(id)a1;
- (void)_writeXMLWorkoutEnd;
- (void)_writeXMLWorkoutRouteStart:(id)a0;
- (void)_writeXMLWorkoutRouteFileReference:(id)a0;
- (void)_writeXMLWorkoutRouteEnd;
- (void)_writeXMLActivitySummary:(id)a0 activeEnergyBurnedUnit:(id)a1;
- (void)_writeXMLMedicalRecordWithType:(id)a0 identifier:(id)a1 sourceName:(id)a2 sourceURL:(id)a3 fhirVersion:(id)a4 receivedDate:(id)a5 jsonFilePath:(id)a6;
- (void)_writeXMLMetadataEntries:(id)a0;
- (id)_formatBPMForBeatToBeatReading:(id)a0;
- (id)_formatTimeForBeatToBeatReading:(id)a0;
- (void)_writeXMLObjectAttributes:(id)a0;
- (void)_writeXMLSampleAttributes:(id)a0;
- (void)_writeHealthRecord:(id)a0 documentDirectory:(id)a1 fileNamesInUse:(id)a2;
- (id)_electrocardiogramHeaderWithName:(id)a0 dateOfBirth:(id)a1;
- (BOOL)_writeElectrocardiogramsToDisk:(id)a0 header:(id)a1 version:(id)a2;
- (BOOL)_addSourceDirectory:(id)a0 asPath:(id)a1 archive:(id)a2 fileManager:(id)a3;

@end
