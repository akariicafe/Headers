@class NSArray, NSString, NSData, NSDate, NSDictionary;

@interface CPLMasterChange : CPLItemChange {
    NSDictionary *_resourcePerResourceType;
}

@property (copy, nonatomic) NSArray *resources;
@property (copy, nonatomic) NSArray *expungeableResourceStates;
@property (copy, nonatomic) NSDate *creationDate;
@property (copy, nonatomic) NSString *itemType;
@property (readonly, nonatomic) BOOL isImage;
@property (readonly, nonatomic) BOOL isVideo;
@property (copy, nonatomic) NSDate *importDate;
@property (copy, nonatomic) NSString *filename;
@property (copy, nonatomic) NSString *importGroupIdentifier;
@property (copy, nonatomic) NSString *mediaMetaDataType;
@property (retain, nonatomic) NSData *mediaMetaData;
@property (nonatomic) long long originalOrientation;
@property (nonatomic) unsigned long long fullSizeJPEGSource;
@property (copy, nonatomic) NSString *originatingFingerprint;
@property (nonatomic) short importedBy;
@property (copy, nonatomic) NSString *importedByBundleIdentifier;
@property (copy, nonatomic) NSString *importedByDisplayName;
@property (nonatomic) short videoFrameRate;
@property (copy, nonatomic) NSString *codec;

- (void)setName:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (BOOL)supportsResources;
- (id)name;
- (BOOL)supportsDeletion;
- (id)propertiesDescription;
- (id /* block */)checkDefaultValueBlockForPropertyWithSelector:(SEL)a0;
- (long long)dequeueOrder;
- (id)propertiesForChangeType:(unsigned long long)a0;
- (id)resourceForType:(unsigned long long)a0;
- (void)_copyDerivatives:(unsigned long long *)a0 count:(int)a1 ifMatchingResourceType:(unsigned long long)a2 fromRecord:(id)a3 inResourcePerType:(id)a4;
- (void)copyDerivativesFromRecordIfPossible:(id)a0;
- (BOOL)supportsResourceType:(unsigned long long)a0;
- (unsigned long long)dataClassType;
- (BOOL)isResourceTypeAGeneratedDerivative:(unsigned long long)a0;
- (BOOL)allowsToOnlyUploadNewResources;
- (BOOL)isMasterChange;
- (BOOL)validateRecordForTracker:(id)a0;

@end
