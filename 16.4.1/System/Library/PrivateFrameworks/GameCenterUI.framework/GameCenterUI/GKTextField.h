@class NSString, GKTextStyle;

@interface GKTextField : UITextField <GKTextStyleReplay> {
    GKTextStyle *_baseStyle;
}

@property (retain, nonatomic) GKTextStyle *baseStyle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) GKTextStyle *appliedStyle;

+ (void)initialize;

@end
