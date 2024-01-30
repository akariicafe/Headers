@class NSString;

@interface VUIAppDocumentRefreshEventDescriptor : VUIAppDocumentUpdateEventDescriptor

@property (nonatomic) unsigned long long delayInSeconds;
@property (copy, nonatomic) NSString *name;

- (id)initWithEventType:(unsigned long long)a0;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initWithEventType:(unsigned long long)a0 delayInSeconds:(unsigned long long)a1 name:(id)a2;

@end
