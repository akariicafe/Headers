@interface NMAPIRecentRadioStationsRequest : NMAPIRequest

@property (nonatomic) unsigned long long limit;

- (id)urlComponentsWithStoreBagDictionary:(id)a0 error:(id *)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (Class)responseParserClass;

@end
