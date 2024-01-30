@class NSNumber;

@interface EDAMNoteResultSpec : FATObject

@property (retain, nonatomic) NSNumber *includeContent;
@property (retain, nonatomic) NSNumber *includeResourcesData;
@property (retain, nonatomic) NSNumber *includeResourcesRecognition;
@property (retain, nonatomic) NSNumber *includeResourcesAlternateData;
@property (retain, nonatomic) NSNumber *includeSharedNotes;
@property (retain, nonatomic) NSNumber *includeNoteAppDataValues;
@property (retain, nonatomic) NSNumber *includeResourceAppDataValues;
@property (retain, nonatomic) NSNumber *includeAccountLimits;

+ (id)structName;
+ (id)structFields;

- (void).cxx_destruct;

@end
