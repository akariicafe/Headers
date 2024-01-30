@class ISPropertyListProvider, NSDictionary;

@interface ISProcessPropertyListOperation : ISOperation {
    NSDictionary *_propertyList;
}

@property (retain) ISPropertyListProvider *dataProvider;

- (void)run;
- (id)initWithPropertyList:(id)a0;
- (void)dealloc;

@end
