@class NSString;

@interface SUConcernItem : NSObject

@property (nonatomic, getter=isDefaultConcern) BOOL defaultConcern;
@property (retain, nonatomic) NSString *identifier;
@property (retain, nonatomic) NSString *title;

- (id)initWithDictionary:(id)a0;
- (void)dealloc;

@end
