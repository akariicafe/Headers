@class NSString;

@interface WBSUserTypedFormString : NSObject <WBSFormAutoFillItem>

@property (readonly, nonatomic) NSString *userTypedString;
@property (readonly, nonatomic) NSString *completion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithUserTypedString:(id)a0;

@end
