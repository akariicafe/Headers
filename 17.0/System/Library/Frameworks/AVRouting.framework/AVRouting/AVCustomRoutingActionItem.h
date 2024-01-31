@class NSString, UTType;

@interface AVCustomRoutingActionItem : NSObject {
    NSString *_identifier;
}

@property (copy, nonatomic) UTType *type;
@property (copy, nonatomic) NSString *overrideTitle;

- (id)init;
- (void)dealloc;
- (void)setIdentifier:(id)a0;
- (id)identifier;

@end
