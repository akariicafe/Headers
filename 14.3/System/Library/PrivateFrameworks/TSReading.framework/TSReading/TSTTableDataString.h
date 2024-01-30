@class NSString;

@interface TSTTableDataString : TSTTableDataObject {
    NSString *mString;
}

- (void)dealloc;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (id)initObjectWithString:(id)a0;

@end
