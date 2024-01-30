@class NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface WFContentItemCache : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) NSMapTable *cache;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;

- (void)clear;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (id)initWithCache:(id)a0;
- (void)addContentCollection:(id)a0;
- (void)deleteContentCollection:(id)a0;
- (id)contentItemForUUID:(id)a0;

@end
