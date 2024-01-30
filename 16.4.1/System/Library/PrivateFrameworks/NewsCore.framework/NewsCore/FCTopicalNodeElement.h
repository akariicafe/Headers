@class NSString, NSSet;

@interface FCTopicalNodeElement : NSObject <NSCopying> {
    NSString *_identifier;
    NSSet *_topics;
    double _score;
}

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
