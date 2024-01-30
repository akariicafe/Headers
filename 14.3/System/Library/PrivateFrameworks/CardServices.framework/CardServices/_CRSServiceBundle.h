@class NSString;
@protocol CRSServing;

@interface _CRSServiceBundle : NSBundle <CRSIdentifiedServing> {
    id<CRSServing> _service;
}

@property (readonly, copy, nonatomic) NSString *serviceIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)underlyingService;
- (void)encodeWithCoder:(id)a0;
- (void)_initializeServiceWithClass:(Class)a0;

@end
