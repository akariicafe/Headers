@class ISPropertyListProvider, NSDictionary;

@interface ISProcessPropertyListOperation : ISOperation {
    NSDictionary *_propertyList;
}

@property (retain) ISPropertyListProvider *dataProvider;

- (void)run;
- (void)dealloc;
- (id)initWithPropertyList:(id)a0;

@end
