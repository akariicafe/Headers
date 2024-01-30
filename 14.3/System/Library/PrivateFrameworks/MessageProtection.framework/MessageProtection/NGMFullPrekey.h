@class DHKey, NGMPublicPreKey;

@interface NGMFullPrekey : NSObject

@property (readonly, nonatomic) DHKey *dhKey;
@property (readonly, nonatomic) NGMPublicPreKey *publicPrekey;

- (BOOL)delete;
- (void).cxx_destruct;
- (id)initWithPrekeySignedBy:(id)a0 error:(id *)a1;
- (id)pbDevicePrekey;
- (id)description;
- (id)initWithPBPrekey:(id)a0 error:(id *)a1;

@end
