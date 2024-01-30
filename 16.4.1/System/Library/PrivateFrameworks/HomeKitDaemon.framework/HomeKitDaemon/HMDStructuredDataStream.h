@class NSError;

@interface HMDStructuredDataStream : NSObject

@property (readonly, copy) NSError *error;

- (void)failWithError:(id)a0;
- (void)failWithReason:(id)a0;

@end
