@class NSDate, THThreadNetworkCredentialsDataSet;

@interface THFrozenThreadNetwork : NSObject

@property (readonly, nonatomic) THThreadNetworkCredentialsDataSet *credentialsDataSet;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSDate *lastModificationDate;

- (void).cxx_destruct;
- (id)initWithCredentialsDataSet:(id)a0 creationDate:(id)a1 lastModificationDate:(id)a2;

@end
