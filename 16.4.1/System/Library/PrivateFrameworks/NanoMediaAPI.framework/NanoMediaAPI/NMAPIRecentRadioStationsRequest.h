@interface NMAPIRecentRadioStationsRequest : NMAPIRequest

@property (nonatomic) unsigned long long limit;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (Class)responseParserClass;
- (id)urlComponentsWithStoreURLBag:(id)a0 error:(id *)a1;

@end
