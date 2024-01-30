@class NSString;

@interface _CNRegExHandleStringClassificationStrategy : NSObject <_CNHandleStringClassificationStrategy>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)doesStringLookLikeEmailAddress:(id)a0;
+ (BOOL)doesStringLookLikePhoneNumber:(id)a0;

- (unsigned long long)classificationOfHandleString:(id)a0;

@end
