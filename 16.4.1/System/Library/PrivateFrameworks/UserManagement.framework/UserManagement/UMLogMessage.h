@class NSString, NSMutableArray;

@interface UMLogMessage : NSObject

@property (retain, nonatomic) NSMutableArray *publicStrings;
@property (retain, nonatomic) NSMutableArray *privateStrings;
@property (readonly, nonatomic) NSString *publicString;
@property (readonly, nonatomic) NSString *privateString;

+ (id)messageWithPrivateFormat:(id)a0 arguments:(char *)a1;
+ (id)messageWithUser:(id)a0;
+ (id)messageWithTask:(id)a0;
+ (id)messageWithTask:(id)a0 publicFormat:(id)a1;
+ (void)_addUserInfoFrom:(id)a0 toMessage:(id)a1;
+ (id)messageWithUser:(id)a0 publicFormat:(id)a1;
+ (id)messageWithPublicFormat:(id)a0;
+ (id)messageWithPublicFormat:(id)a0 arguments:(char *)a1;
+ (id)messageWithTask:(id)a0 privateFormat:(id)a1;
+ (void)_addTaskInfoFrom:(id)a0 toMessage:(id)a1;
+ (id)messageWithUser:(id)a0 privateFormat:(id)a1;
+ (id)messageWithPrivateFormat:(id)a0;

- (void)addPrivateFormat:(id)a0;
- (void)addPublicFormat:(id)a0;
- (id)init;
- (id)_stringForArray:(id)a0;
- (void).cxx_destruct;

@end
