@class NSString, NSURL;

@interface CLSArchivedAsset : CLSObject <CLSRelationable> {
    BOOL _uploaded;
    BOOL _addedToFilePresenter;
    BOOL _shared;
    long long _totalUnitCount;
    long long _completedUnitCount;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSURL *url;
@property (retain, nonatomic) NSString *ownerPersonID;
@property (retain, nonatomic) NSString *brItemID;
@property (retain, nonatomic) NSString *brOwnerName;
@property (retain, nonatomic) NSString *brZoneName;
@property (retain, nonatomic) NSString *brShareName;
@property (retain, nonatomic) NSString *ubiquitousContainerName;
@property (retain, nonatomic) NSString *relativePathWithinContainer;

+ (BOOL)supportsSecureCoding;
+ (id)relations;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)_init;
- (id)initWithCoder:(id)a0;
- (void)urlSuitableForOpeningWithCompletion:(id /* block */)a0;

@end
