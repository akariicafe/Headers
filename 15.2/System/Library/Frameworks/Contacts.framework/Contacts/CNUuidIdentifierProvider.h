@class NSString;

@interface CNUuidIdentifierProvider : NSObject <CNIdentifierProvider> {
    NSString *_suffix;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)makeIdentifier;
- (void).cxx_destruct;
- (id)initWithSuffix:(id)a0;

@end
