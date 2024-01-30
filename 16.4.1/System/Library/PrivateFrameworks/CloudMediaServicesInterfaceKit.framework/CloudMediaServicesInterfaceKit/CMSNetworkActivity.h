@class NSObject;
@protocol OS_nw_activity;

@interface CMSNetworkActivity : NSObject <NSSecureCoding> {
    BOOL _completed;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) unsigned int label;
@property (readonly, nonatomic) NSObject<OS_nw_activity> *nwActivity;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)associateWithTask:(id)a0;
- (void)completeActivity:(int)a0;
- (id)initWithLabel:(unsigned int)a0 parentActivity:(id)a1;
- (id)initWithLabel:(unsigned int)a0 parentUUID:(id)a1;
- (id)initWithRetry:(id)a0;

@end
