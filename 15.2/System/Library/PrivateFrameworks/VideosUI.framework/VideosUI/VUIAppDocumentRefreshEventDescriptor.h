@class NSString;

@interface VUIAppDocumentRefreshEventDescriptor : VUIAppDocumentUpdateEventDescriptor

@property (nonatomic) unsigned long long delayInSeconds;
@property (copy, nonatomic) NSString *name;

- (id)description;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithEventType:(unsigned long long)a0;
- (unsigned long long)hash;
- (id)initWithEventType:(unsigned long long)a0 delayInSeconds:(unsigned long long)a1 name:(id)a2;

@end
