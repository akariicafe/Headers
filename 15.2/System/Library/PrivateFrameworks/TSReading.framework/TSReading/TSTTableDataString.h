@class NSString;

@interface TSTTableDataString : TSTTableDataObject {
    NSString *mString;
}

- (id)description;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)dealloc;
- (id)initObjectWithString:(id)a0;

@end
