@class NSString, UTType;

@interface AVCustomRoutingActionItem : NSObject {
    NSString *_identifier;
}

@property (copy, nonatomic) UTType *type;
@property (copy, nonatomic) NSString *overrideTitle;

- (id)identifier;
- (void)setIdentifier:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
