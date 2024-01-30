@class NSString;

@interface TSTTableDataString : TSTTableDataObject {
    NSString *mString;
}

- (void)dealloc;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)description;
- (id)initObjectWithString:(id)a0;

@end
