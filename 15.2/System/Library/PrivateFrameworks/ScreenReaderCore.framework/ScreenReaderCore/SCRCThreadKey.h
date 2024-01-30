@class NSString;

@interface SCRCThreadKey : NSObject <NSCopying> {
    unsigned long long _threadID;
    NSString *_threadDescription;
}

@property (readonly, nonatomic) unsigned long long threadID;
@property (readonly, nonatomic) NSString *threadDescription;

+ (void)initialize;

- (id)initWithDescription:(id)a0;
- (id)description;
- (id)initWithObject:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)threadID;
- (unsigned long long)hash;
- (void)dealloc;
- (id)threadDescription;
- (id)_initWithThreadID:(unsigned long long)a0 description:(id)a1;
- (id)_allCurrentThreadIDs;

@end
