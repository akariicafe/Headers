@class NSArray, NSString, NSNumber;

@interface NMSSHHostConfig : NSObject

@property (retain, nonatomic) NSArray *hostPatterns;
@property (retain, nonatomic) NSString *hostname;
@property (retain, nonatomic) NSString *user;
@property (retain, nonatomic) NSNumber *port;
@property (retain, nonatomic) NSArray *identityFiles;

- (void)mergeFrom:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)arrayByRemovingDuplicateElementsFromArray:(id)a0;
- (id)mergedArray:(id)a0 withArray:(id)a1;

@end
