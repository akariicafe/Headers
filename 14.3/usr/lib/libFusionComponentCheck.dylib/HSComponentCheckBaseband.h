@class NSString;

@interface HSComponentCheckBaseband : HSComponentCheckBase {
    NSString *currentBBUniqueChipId;
    NSString *currentBBSerialNo;
}

- (void).cxx_destruct;
- (id)querySN;
- (id)getBasebandInfo:(int)a0 response:(id *)a1;

@end
