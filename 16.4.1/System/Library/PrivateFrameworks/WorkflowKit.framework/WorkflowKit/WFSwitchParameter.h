@class NSString;

@interface WFSwitchParameter : WFParameter

@property (class, readonly, nonatomic) NSString *defaultOnDisplayName;
@property (class, readonly, nonatomic) NSString *defaultOffDisplayName;

@property (readonly, nonatomic) NSString *onDisplayName;
@property (readonly, nonatomic) NSString *offDisplayName;
@property (readonly, nonatomic) NSString *localizedOnDisplayName;
@property (readonly, nonatomic) NSString *localizedOffDisplayName;

- (id)initWithDefinition:(id)a0;
- (void).cxx_destruct;
- (Class)singleStateClass;

@end
