@class NSString;

@interface SCRCThreadKey : NSObject <NSCopying> {
    unsigned long long _threadID;
    NSString *_threadDescription;
}

@property (readonly, nonatomic) unsigned long long threadID;
@property (readonly, nonatomic) NSString *threadDescription;

+ (void)initialize;

- (id)initWithDescription:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithObject:(id)a0;
- (void)dealloc;
- (unsigned long long)hash;
- (id)description;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)threadID;
- (id)threadDescription;
- (id)_initWithThreadID:(unsigned long long)a0 description:(id)a1;
- (id)_allCurrentThreadIDs;

@end
