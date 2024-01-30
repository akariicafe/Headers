@class NSArray, NSString, NSObject;
@protocol OS_nw_path;

@interface CRKConcreteNetworkPath : NSObject <CRKNetworkPath>

@property (readonly, nonatomic) NSObject<OS_nw_path> *underlyingPath;
@property (readonly, nonatomic, getter=isSatisfied) BOOL satisfied;
@property (readonly, copy, nonatomic) NSArray *interfaces;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithUnderlyingPath:(id)a0;

@end
