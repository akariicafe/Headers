@class NSString;

@interface REIdentifier : NSString <NSCopying> {
    unsigned long long _hash;
    unsigned long long _length;
}

@property (readonly, nonatomic) NSString *dataSource;
@property (readonly, nonatomic) NSString *section;
@property (readonly, nonatomic) NSString *identifier;

- (BOOL)isEqualToString:(id)a0;
- (unsigned short)characterAtIndex:(unsigned long long)a0;
- (unsigned long long)length;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0 section:(id)a1 identifier:(id)a2;

@end
