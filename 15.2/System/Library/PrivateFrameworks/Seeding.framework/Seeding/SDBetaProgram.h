@class NSString, NSURL, NSArray;

@interface SDBetaProgram : NSObject

@property (nonatomic) long long programID;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *program;
@property (retain, nonatomic) NSURL *catalog;
@property (retain, nonatomic) NSURL *assetUpdate;
@property (retain, nonatomic) NSURL *assetBrain;
@property (retain, nonatomic) NSString *assetAudience;
@property (retain, nonatomic) NSArray *legalDocs;

+ (id)nilIfNSNull:(id)a0;
+ (id)betaProgramWithID:(long long)a0 title:(id)a1 program:(id)a2 catalog:(id)a3 assetUpdate:(id)a4 assetBrain:(id)a5 assetAudience:(id)a6 legalDocs:(id)a7;
+ (id)betaProgramWithJSON:(id)a0;

- (void).cxx_destruct;
- (id)initWithID:(long long)a0 title:(id)a1 program:(id)a2 catalog:(id)a3 assetUpdate:(id)a4 assetBrain:(id)a5 assetAudience:(id)a6 legalDocs:(id)a7;

@end
