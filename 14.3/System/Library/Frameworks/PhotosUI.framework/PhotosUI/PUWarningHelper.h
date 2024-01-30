@class NSArray;

@interface PUWarningHelper : NSObject

@property (retain, nonatomic, setter=_setAssets:) NSArray *_assets;

+ (id)_suffix:(id)a0;
+ (void)getRemovalWarningMessage:(id *)a0 buttonTitle:(id *)a1 cancelTitle:(id *)a2 forAssets:(id)a3 inCollection:(id)a4;
+ (void)getCombinedRemovalDeletionWarningMessage:(id *)a0 removeButtonTitle:(id *)a1 deleteButtonTitle:(id *)a2 cancelTitle:(id *)a3 forAssets:(id)a4 inCollection:(id)a5;

- (void).cxx_destruct;

@end
