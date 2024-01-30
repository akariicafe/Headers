@class NSString;

@interface SUConcernItem : NSObject

@property (nonatomic, getter=isDefaultConcern) BOOL defaultConcern;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *title;

- (void)dealloc;
- (id)initWithDictionary:(id)a0;

@end
