@class CNHandleStringClassifier;

@interface CNSharedProfileContactHandleHelper : NSObject

@property (retain, nonatomic) CNHandleStringClassifier *classifier;

+ (id)log;

- (id)init;
- (void).cxx_destruct;
- (id)initWithHandleStringClassifier:(id)a0;
- (BOOL)contact:(id)a0 containsEmailHandleString:(id)a1;
- (BOOL)contact:(id)a0 containsHandleString:(id)a1;
- (BOOL)contact:(id)a0 containsPhoneHandleString:(id)a1;

@end
