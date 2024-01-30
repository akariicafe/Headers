@interface VoiceDialMaidenNameDataSource : VoiceDialNameDataSource

- (unsigned long long)personNameCount;
- (unsigned long long)countOfNamesOfType:(int)a0;
- (BOOL)getName:(id *)a0 phoneticName:(id *)a1 atIndex:(unsigned long long)a2 forPerson:(void *)a3;
- (BOOL)getNth:(unsigned long long)a0 name:(id *)a1 phoneticName:(id *)a2 ofType:(int)a3 nameIndex:(unsigned long long *)a4 forPerson:(void *)a5;
- (int)matchingNameType:(id)a0 fromTypes:(unsigned long long)a1 forPerson:(void *)a2;
- (int)typeOfNameAtIndex:(unsigned long long)a0;

@end
