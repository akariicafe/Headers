@class NSString;

@interface WFSwitchParameter : WFParameter

@property (class, readonly, nonatomic) NSString *defaultOnDisplayName;
@property (class, readonly, nonatomic) NSString *defaultOffDisplayName;

@property (readonly, nonatomic) NSString *onDisplayName;
@property (readonly, nonatomic) NSString *offDisplayName;
@property (readonly, nonatomic) NSString *localizedOnDisplayName;
@property (readonly, nonatomic) NSString *localizedOffDisplayName;

- (void).cxx_destruct;
- (id)initWithDefinition:(id)a0;
- (Class)singleStateClass;

@end
