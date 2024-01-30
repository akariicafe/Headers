@class NSArray;

@interface ML3CloudKVSTable : ML3DatabaseTable {
    NSArray *_columns;
}

- (id)columns;
- (void).cxx_destruct;
- (id)name;

@end
