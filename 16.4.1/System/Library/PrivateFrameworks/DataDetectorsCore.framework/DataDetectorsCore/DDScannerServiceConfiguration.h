@class NSString, NSObject;
@protocol OS_dispatch_queue;

@interface DDScannerServiceConfiguration : NSObject <NSCopying, NSSecureCoding> {
    int _scannerType;
    BOOL _spotlightSuggestionsEnabled;
    NSString *_recyclingIdentifier;
    long long *_jobIdentifierPtr;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) BOOL noObjC;
@property (nonatomic) BOOL spotlightSuggestionsEnabled;
@property (nonatomic) BOOL remoteScannerEnabled;
@property (nonatomic) double timeout;
@property (nonatomic) long long resultsOptions;
@property (nonatomic) long long scannerOptions;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *completionQueue;

- (void)encodeWithCoder:(id)a0;
- (id)initEmpty;
- (int)scannerType;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)updateRecyclingIdentifier;
- (id)initWithScannerType:(int)a0 passiveIntent:(BOOL)a1;
- (id)init;
- (id)description;
- (id)recyclingIdentifier;
- (void).cxx_destruct;

@end
