@class NSObject;
@protocol OS_nw_activity;

@interface CMSNetworkActivity : NSObject <NSSecureCoding> {
    BOOL _completed;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned int label;
@property (readonly, nonatomic) NSObject<OS_nw_activity> *nwActivity;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)associateWithTask:(id)a0;
- (id)initWithLabel:(unsigned int)a0 parentActivity:(id)a1;
- (void)completeActivity:(int)a0;
- (id)initWithRetry:(id)a0;
- (id)initWithLabel:(unsigned int)a0 parentUUID:(id)a1;

@end
