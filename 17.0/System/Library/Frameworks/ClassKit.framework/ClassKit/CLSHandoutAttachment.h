@class NSString, NSArray, NSURL, NSDate, CLSHandout, CLSSurvey;

@interface CLSHandoutAttachment : CLSObject <CLSRelationable, CLSCollaborationStateRepresentable, CLSMutableAssetAdopter> {
    int _shareType;
    int _permissionType;
    NSURL *_URL;
    NSArray *_contextPath;
    NSString *_title;
    NSString *_bundleIdentifier;
    NSString *_applicationName;
    NSString *_contentStoreIdentifier;
    NSString *_contextSummary;
    NSString *_contextCustomTypeName;
    BOOL _contextSourceIsCatalog;
    int _completionStatus;
    long long _displayOrder;
    long long _contextType;
    NSDate *_dateLastCompleted;
    double _timeExpectation;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=isLocked) BOOL locked;
@property (retain, nonatomic) NSDate *dateLastCompleted;
@property (copy, nonatomic) NSString *storeIdentifier;
@property (nonatomic) int type;
@property (nonatomic) int shareType;
@property (nonatomic) int permissionType;
@property (nonatomic) long long contextType;
@property (nonatomic) long long displayOrder;
@property (copy, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSArray *assets;
@property (copy, nonatomic) NSArray *contextPath;
@property (copy, nonatomic) NSString *contextSummary;
@property (copy, nonatomic) NSString *contextCustomTypeName;
@property (nonatomic) BOOL contextSourceIsCatalog;
@property (copy, nonatomic) NSString *bundleIdentifier;
@property (copy, nonatomic) NSString *applicationName;
@property (copy, nonatomic) NSString *contentStoreIdentifier;
@property (readonly, nonatomic) NSString *parentObjectID;
@property (readonly, nonatomic) CLSHandout *parent;
@property (copy, nonatomic) NSString *title;
@property (readonly, nonatomic) NSArray *collaborationStates;
@property (nonatomic) int completionStatus;
@property (readonly, nonatomic, getter=isComplete) BOOL complete;
@property (readonly, copy, nonatomic) CLSSurvey *survey;
@property (nonatomic) double timeExpectation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;
+ (id)relations;

- (id)_init;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithCoder:(id)a0;
- (void)mergeWithObject:(id)a0;
- (void)addAsset:(id)a0;
- (void)removeAsset:(id)a0;
- (id)initWithType:(int)a0 title:(id)a1;
- (BOOL)validateObject:(id *)a0;
- (id)assetForPerson:(id)a0;
- (void)addSurvey:(id)a0;
- (void)getNumberOfAttemptsWithCompletion:(id /* block */)a0;
- (void)removeSurvey:(id)a0;

@end
