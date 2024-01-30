@class NSString, NSArray;

@interface RMUIPasscodeViewModel : NSObject

@property short symbol;
@property (retain) NSString *title;
@property (retain) NSArray *detailViewModels;

- (id)init;
- (void).cxx_destruct;
- (void)clearModel;

@end
