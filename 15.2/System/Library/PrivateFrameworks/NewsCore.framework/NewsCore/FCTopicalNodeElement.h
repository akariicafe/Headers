@class NSString, NSSet;

@interface FCTopicalNodeElement : NSObject <NSCopying> {
    NSString *_identifier;
    NSSet *_topics;
    double _score;
}

- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
