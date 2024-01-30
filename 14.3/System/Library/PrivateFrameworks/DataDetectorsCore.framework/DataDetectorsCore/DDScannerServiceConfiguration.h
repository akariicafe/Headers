@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface DDScannerServiceConfiguration : NSObject {
    int _scannerType;
    BOOL _spotlightSuggestionsEnabled;
    NSString *_recyclingIdentifier;
    long long *_jobIdentifierPtr;
}

@property (nonatomic) BOOL noObjC;
@property (nonatomic) BOOL spotlightSuggestionsEnabled;
@property (nonatomic) double timeout;
@property (nonatomic) long long resultsOptions;
@property (nonatomic) long long scannerOptions;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue;

- (id)init;
- (void).cxx_destruct;
- (BOOL)supportsSecureCoding;
- (id)copy;
- (id)initWithCoder:(id)a0;
- (int)scannerType;
- (id)initWithScannerType:(int)a0 passiveIntent:(BOOL)a1;
- (void)updateRecyclingIdentifier;
- (id)recyclingIdentifier;
- (id)description;
- (id)initEmpty;
- (void)encodeWithCoder:(id)a0;

@end
