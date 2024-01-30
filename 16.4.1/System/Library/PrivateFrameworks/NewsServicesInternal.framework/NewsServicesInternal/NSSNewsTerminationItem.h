@class NSString;

@interface NSSNewsTerminationItem : NSObject <NSCopying>

@property (nonatomic) unsigned long long processType;
@property (copy, nonatomic) NSString *bundleID;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithProcessType:(unsigned long long)a0 bundleID:(id)a1;

@end
