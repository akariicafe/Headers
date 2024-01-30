@class PQLResultSet, BRCPCSChainInfo;
@protocol PQLEnumeration;

@interface BRCPCSChainBreadthEnumerator : NSEnumerator {
    BRCPCSChainInfo *_chainInfo;
    PQLResultSet<PQLEnumeration> *_enumerator;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)nextObject;
- (id)initWithPCSChainInfo:(id)a0 clientZone:(id)a1;
- (id)chainInfo;

@end
