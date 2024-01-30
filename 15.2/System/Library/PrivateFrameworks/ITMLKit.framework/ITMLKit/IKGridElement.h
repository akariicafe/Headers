@class NSString;

@interface IKGridElement : IKCollectionElement

@property (readonly, nonatomic) unsigned long long columnCount;
@property (readonly, nonatomic) NSString *rowHeight;
@property (readonly, nonatomic, getter=isPaged) BOOL paged;
@property (readonly, nonatomic) unsigned long long rowCount;

- (id)initWithDOMElement:(id)a0 parent:(id)a1 elementFactory:(id)a2;

@end
