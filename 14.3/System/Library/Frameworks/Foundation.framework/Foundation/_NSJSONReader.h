@class NSError;

@interface _NSJSONReader : NSObject {
    id input;
    int kind;
    NSError *error;
}

+ (BOOL)validForJSON:(id)a0 depth:(unsigned long long)a1 allowFragments:(BOOL)a2;

- (id)init;
- (void)dealloc;
- (id)error;
- (id)parseData:(id)a0 options:(unsigned long long)a1;
- (id)parseStream:(id)a0 options:(unsigned long long)a1;

@end
