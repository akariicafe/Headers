@class NSString;

@interface _ACPluginDBBundle : NSObject <NSSecureCoding> {
    NSString *mFullPath;
    double mInfoPlistModDate;
    double mRsrcModDate;
    struct AudioComponentVector { struct shared_ptr<APComponent> *__begin_; struct shared_ptr<APComponent> *__end_; struct __compressed_pair<std::__1::shared_ptr<APComponent> *, std::__1::allocator<std::__1::shared_ptr<APComponent> > > { struct shared_ptr<APComponent> *__value_; } __end_cap_; BOOL mSorted; } mBundleComponentVector;
}

@property (class, readonly) BOOL supportsSecureCoding;

- (void).cxx_destruct;
- (id)initWithPath:(id)a0 infoPlistModDate:(double)a1 rsrcModDate:(double)a2;
- (void)loadAllComponents:(struct AudioComponentVector { struct shared_ptr<APComponent> *x0; struct shared_ptr<APComponent> *x1; struct __compressed_pair<std::__1::shared_ptr<APComponent> *, std::__1::allocator<std::__1::shared_ptr<APComponent> > > { struct shared_ptr<APComponent> *x0; } x2; BOOL x3; } *)a0;
- (void)scanWithPriority:(int)a0 loadable:(BOOL)a1 infoPlistPath:(id)a2;
- (id)initWithCoder:(id)a0;
- (id).cxx_construct;
- (void)encodeWithCoder:(id)a0;

@end
