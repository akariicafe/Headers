@class NSString;

@interface _ATXActionMetaData : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSString *actionKey;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) BOOL shouldPredict;
@property (readonly, nonatomic) BOOL shouldPredictLockScreen;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithTitle:(id)a0 subtitle:(id)a1 shouldPredict:(BOOL)a2 shouldPredictLockScreen:(BOOL)a3 actionKey:(id)a4;

@end
