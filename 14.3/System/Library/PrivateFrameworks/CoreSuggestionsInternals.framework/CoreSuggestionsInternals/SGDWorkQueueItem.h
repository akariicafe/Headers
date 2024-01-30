@class NSString, SGDWorkQueueName, NSObject;
@protocol NSSecureCoding;

@interface SGDWorkQueueItem : NSObject {
    SGDWorkQueueName *_name;
    NSString *_filename;
}

@property (readonly, nonatomic) unsigned long long state;
@property (readonly, nonatomic) unsigned long long fails;
@property (readonly, nonatomic) NSObject<NSSecureCoding> *object;
@property (readonly, nonatomic) NSString *queueId;

- (void)finish;
- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (void)markAsFailed;
- (id)initWithObject:(id)a0 name:(id)a1 dir:(id)a2;

@end
